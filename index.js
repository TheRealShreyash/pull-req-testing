import express from "express";

const app = express();

app.listen("/health", (req, res) => {
  res.status(200).json({ healthy: true });
});

app.listen(8080, () => {
  console.log("App listening on http://localhost:8080");
});
