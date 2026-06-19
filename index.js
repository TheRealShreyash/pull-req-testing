import express from "express";

const app = express();

app.get("/health", (req, res) => {
  res.status(200).json({ healthy: true });
});

app.get("/auth", (req, res) => {
  res.status(200).json({ message: "Welcome to the auth endpoint" });
});

app.listen(8080, () => {
  console.log("App listening on http://localhost:8080");
});
